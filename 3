import requests
import json

# === Configuration ===
API_TOKEN = "aabaBvG3LPG5zgGkCSGJFSqfdTRc"
CERT_FILE = "D:\\test_uad\\test\\optimus-client-prd-cert.crt"
KEY_FILE = "D:\\test_uad\\test\\decrypted.key"  # Make sure this is DECRYPTED!
CA_BUNDLE = "D:\\test_uad\\test\\ca_bundle.pem"

# ✅ Dynatrace Management Zones Endpoint
DYNATRACE_URL = "https://api-platform-mtls.cib.echonet/it_prod-dynatrace-configuration/v1/managementZones"

# ✅ REMOVE unrelated params
params = {}

# Headers
headers = {
    "Authorization": f"Api-Token {API_TOKEN}",
    "Content-Type": "application/json"
}

try:
    print("🌐 Sending HTTPS request to Dynatrace...")

    response = requests.get(
        DYNATRACE_URL,
        headers=headers,
        params=params,
        cert=(CERT_FILE, KEY_FILE),
        verify=CA_BUNDLE
    )

    response.raise_for_status()
    print("✅ Request successful")
    print(json.dumps(response.json(), indent=2))

except requests.exceptions.SSLError as ssl_err:
    print("❌ SSL Error - likely due to encrypted key:", ssl_err)
except requests.exceptions.RequestException as e:
    print("❌ Request failed:", e)
